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

// Function: entry_001270b0
// Address: 0x1270b0 - 0x127134
void entry_001270b0_0x1270b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001270b0_0x1270b0");
#endif

    ctx->pc = 0x1270b0u;

    // 0x1270b0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1270b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1270b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1270B4u;
    {
        const bool branch_taken_0x1270b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270B4u;
        // 0x1270b8: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270b4) {
            ctx->pc = 0x127058u;
            return;
        }
    }
    ctx->pc = 0x1270BCu;
    // 0x1270bc: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1270BCu;
    {
        const bool branch_taken_0x1270bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270BCu;
        // 0x1270c0: 0x2a62000c  slti        $v0, $s3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270bc) {
            ctx->pc = 0x127134u;
            return;
        }
    }
    ctx->pc = 0x1270C4u;
    // 0x1270c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1270c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1270c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1270c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1270ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1270d0: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x1270d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1270d4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1270d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1270d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1270d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1270dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1270dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1270e0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1270e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1270e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1270e8: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x1270e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1270ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1270ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270f0: 0xe4760008  swc1        $f22, 0x8($v1)
    ctx->pc = 0x1270f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1270f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1270f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1270f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1270f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1270fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1270fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127100: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x127100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x127104: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x127108: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x127108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12710c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12710cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x127110: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x127110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127114: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x127114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127118: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x127118u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12711c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x12711cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x127120: 0xe4960008  swc1        $f22, 0x8($a0)
    ctx->pc = 0x127120u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x127124: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x127124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x127128: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x127128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12712c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12712cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127130: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x127130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    ctx->pc = 0x127134u;
}
