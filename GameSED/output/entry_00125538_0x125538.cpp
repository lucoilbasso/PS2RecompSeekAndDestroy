#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00125538
// Address: 0x125538 - 0x1255ac
void entry_00125538_0x125538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125538_0x125538");
#endif

    ctx->pc = 0x125538u;

    // 0x125538: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x125538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12553c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12553Cu;
    {
        const bool branch_taken_0x12553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12553Cu;
        // 0x125540: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12553c) {
            ctx->pc = 0x1254E0u;
            return;
        }
    }
    ctx->pc = 0x125544u;
    // 0x125544: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x125544u;
    {
        const bool branch_taken_0x125544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125544u;
        // 0x125548: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125544) {
            ctx->pc = 0x1255ACu;
            return;
        }
    }
    ctx->pc = 0x12554Cu;
    // 0x12554c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12554cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125550: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x125550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12555c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12555cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125560: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x125560u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x125564: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125568: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x125568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x12556c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12556cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125570: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x125570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x125574: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x125574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125578: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x125578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12557c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125580: 0xe4960000  swc1        $f22, 0x0($a0)
    ctx->pc = 0x125580u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x125584: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125588: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x125588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12558c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12558cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x125590: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x125590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125594: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x125594u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x125598: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x125598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12559c: 0xe4760000  swc1        $f22, 0x0($v1)
    ctx->pc = 0x12559cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1255a0: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x1255a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1255a4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1255a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1255a8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1255a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1255acu;
}
