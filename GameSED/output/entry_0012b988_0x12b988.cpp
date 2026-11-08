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

// Function: entry_0012b988
// Address: 0x12b988 - 0x12ba28
void entry_0012b988_0x12b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b988_0x12b988");
#endif

    ctx->pc = 0x12b988u;

    // 0x12b988: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x12b988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b98c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12B98Cu;
    {
        const bool branch_taken_0x12b98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B98Cu;
        // 0x12b990: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b98c) {
            ctx->pc = 0x12B930u;
            return;
        }
    }
    ctx->pc = 0x12B994u;
    // 0x12b994: 0x16200045  bnez        $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x12B994u;
    {
        const bool branch_taken_0x12b994 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B994u;
        // 0x12b998: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b994) {
            ctx->pc = 0x12BAACu;
            return;
        }
    }
    ctx->pc = 0x12B99Cu;
    // 0x12b99c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x12b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x12b9a0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x12b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x12b9a4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x12B9A4u;
    {
        const bool branch_taken_0x12b9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A4u;
        // 0x12b9a8: 0xa3a000c7  sb          $zero, 0xC7($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a4) {
            ctx->pc = 0x12BA28u;
            return;
        }
    }
    ctx->pc = 0x12B9ACu;
    // 0x12b9ac: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x12b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x12b9b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9b4: 0xfc560008  sd          $s6, 0x8($v0)
    ctx->pc = 0x12b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 22));
    // 0x12b9b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x12b9c0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12b9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9c4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x12b9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12b9c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12b9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9d4: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9dc: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12b9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12b9e0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12b9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12b9e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9ec: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x12b9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12b9f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12b9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9f8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b9fc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x12b9fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ba00: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ba04: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ba08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12ba0c: 0xfc960008  sd          $s6, 0x8($a0)
    ctx->pc = 0x12ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 22));
    // 0x12ba10: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x12ba10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12ba14: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba18: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x12ba18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ba1c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12ba1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12ba20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12BA20u;
    {
        const bool branch_taken_0x12ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA20u;
        // 0x12ba24: 0xe4b40000  swc1        $f20, 0x0($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba20) {
            ctx->pc = 0x12BAA0u;
            return;
        }
    }
    ctx->pc = 0x12BA28u;
}
