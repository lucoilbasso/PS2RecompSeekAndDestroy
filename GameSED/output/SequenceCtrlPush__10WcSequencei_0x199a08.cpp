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

// Function: SequenceCtrlPush__10WcSequencei
// Address: 0x199a08 - 0x199aa8
void SequenceCtrlPush__10WcSequencei_0x199a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SequenceCtrlPush__10WcSequencei_0x199a08");
#endif

    switch (ctx->pc) {
        case 0x199a48u: goto label_199a48;
        default: break;
    }

    ctx->pc = 0x199a08u;

    // 0x199a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199a1c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x199a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x199a20: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x199a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x199a24: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x199a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x199a28: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x199a2c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x199a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x199a30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199A30u;
    {
        const bool branch_taken_0x199a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A30u;
        // 0x199a34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a30) {
            ctx->pc = 0x199A48u;
            goto label_199a48;
        }
    }
    ctx->pc = 0x199A38u;
    // 0x199a38: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x199a3c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x199a40: 0xc068186  jal         func_1A0618
    ctx->pc = 0x199A40u;
    SET_GPR_U32(ctx, 31, 0x199A48u);
    ctx->pc = 0x199A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A40u;
    // 0x199a44: 0x24a58460  addiu       $a1, $a1, -0x7BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x199A40u, 0x199A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A48u;
label_199a48:
    // 0x199a48: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x199a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x199a4c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x199a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x199a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199a54: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x199a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x199a58: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x199a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x199a5c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x199a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x199a60: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x199a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x199a64: 0xb0440017  sdl         $a0, 0x17($v0)
    ctx->pc = 0x199a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199a68: 0xb4440010  sdr         $a0, 0x10($v0)
    ctx->pc = 0x199a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199a6c: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x199a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199a70: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x199a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199a74: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x199a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x199a78: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x199a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x199a7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199a80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x199a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x199a84: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x199a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x199a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199a8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x199a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x199a90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x199a94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199a98: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x199a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x199a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x199AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA0u;
        // 0x199aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199AA8u;
}
