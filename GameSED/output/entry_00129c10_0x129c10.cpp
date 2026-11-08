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

// Function: entry_00129c10
// Address: 0x129c10 - 0x129c80
void entry_00129c10_0x129c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129c10_0x129c10");
#endif

    ctx->pc = 0x129c10u;

    // 0x129c10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c14: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c18: 0xfc4b0008  sd          $t3, 0x8($v0)
    ctx->pc = 0x129c18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 11));
    // 0x129c1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x129c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c20: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x129c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x129c28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x129c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c2c: 0xe4570004  swc1        $f23, 0x4($v0)
    ctx->pc = 0x129c2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c34: 0xe4770008  swc1        $f23, 0x8($v1)
    ctx->pc = 0x129c34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129c38: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c3c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c44: 0xe4790004  swc1        $f25, 0x4($v1)
    ctx->pc = 0x129c44u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x129c48: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c4c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x129c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x129c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x129c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129c58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129c5c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129c60: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x129c60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x129c64: 0xe4970008  swc1        $f23, 0x8($a0)
    ctx->pc = 0x129c64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x129c68: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x129c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x129c6c: 0xe49a0004  swc1        $f26, 0x4($a0)
    ctx->pc = 0x129c6cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x129c70: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x129c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129c74: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x129C74u;
    {
        const bool branch_taken_0x129c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C74u;
        // 0x129c78: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c74) {
            ctx->pc = 0x129D50u;
            return;
        }
    }
    ctx->pc = 0x129C7Cu;
    // 0x129c7c: 0x0  nop
    ctx->pc = 0x129c7cu;
    // NOP
    ctx->pc = 0x129c80u;
}
