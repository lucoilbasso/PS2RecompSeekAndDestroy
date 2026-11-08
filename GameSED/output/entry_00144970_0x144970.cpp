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

// Function: entry_00144970
// Address: 0x144970 - 0x1449d0
void entry_00144970_0x144970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144970_0x144970");
#endif

    switch (ctx->pc) {
        case 0x1449acu: goto label_1449ac;
        case 0x1449b8u: goto label_1449b8;
        default: break;
    }

    ctx->pc = 0x144970u;

    // 0x144970: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x144974: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x144974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144978: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x14497c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x144980: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x144980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x144984: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x144984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x144988: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x144988u;
    {
        const bool branch_taken_0x144988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144988u;
        // 0x14498c: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144988) {
            ctx->pc = 0x144A10u;
            return;
        }
    }
    ctx->pc = 0x144990u;
    // 0x144990: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x144994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144998: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x144998u;
    {
        const bool branch_taken_0x144998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144998u;
        // 0x14499c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144998) {
            ctx->pc = 0x1449D0u;
            return;
        }
    }
    ctx->pc = 0x1449A0u;
    // 0x1449a0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1449a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1449A4u;
    SET_GPR_U32(ctx, 31, 0x1449ACu);
    ctx->pc = 0x1449A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449A4u;
    // 0x1449a8: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1449A4u, 0x1449ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449ACu;
label_1449ac:
    // 0x1449ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1449acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449b0: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1449B0u;
    SET_GPR_U32(ctx, 31, 0x1449B8u);
    ctx->pc = 0x1449B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449B0u;
    // 0x1449b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1449B0u, 0x1449B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449B8u;
label_1449b8:
    // 0x1449b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1449b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1449bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449c0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1449c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1449C4u;
    {
        const bool branch_taken_0x1449c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449C4u;
        // 0x1449c8: 0x2605000a  addiu       $a1, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449c4) {
            ctx->pc = 0x1449F8u;
            return;
        }
    }
    ctx->pc = 0x1449CCu;
    // 0x1449cc: 0x0  nop
    ctx->pc = 0x1449ccu;
    // NOP
    ctx->pc = 0x1449d0u;
}
