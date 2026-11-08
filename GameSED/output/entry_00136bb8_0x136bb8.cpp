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

// Function: entry_00136bb8
// Address: 0x136bb8 - 0x136c10
void entry_00136bb8_0x136bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136bb8_0x136bb8");
#endif

    switch (ctx->pc) {
        case 0x136bdcu: goto label_136bdc;
        case 0x136be8u: goto label_136be8;
        default: break;
    }

    ctx->pc = 0x136bb8u;

    // 0x136bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136bbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136bc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136bc4: 0x8e540404  lw          $s4, 0x404($s2)
    ctx->pc = 0x136bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1028)));
    // 0x136bc8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x136bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x136bcc: 0x10a30048  beq         $a1, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x136BCCu;
    {
        const bool branch_taken_0x136bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x136BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BCCu;
        // 0x136bd0: 0x8e330024  lw          $s3, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bcc) {
            ctx->pc = 0x136CF0u;
            return;
        }
    }
    ctx->pc = 0x136BD4u;
    // 0x136bd4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136BD4u;
    SET_GPR_U32(ctx, 31, 0x136BDCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136BD4u, 0x136BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BDCu;
label_136bdc:
    // 0x136bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136be0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x136BE0u;
    SET_GPR_U32(ctx, 31, 0x136BE8u);
    ctx->pc = 0x136BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BE0u;
    // 0x136be4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x136BE0u, 0x136BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BE8u;
label_136be8:
    // 0x136be8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x136be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136bec: 0x1603001a  bne         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x136BECu;
    {
        const bool branch_taken_0x136bec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x136BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BECu;
        // 0x136bf0: 0xae420404  sw          $v0, 0x404($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bec) {
            ctx->pc = 0x136C58u;
            return;
        }
    }
    ctx->pc = 0x136BF4u;
    // 0x136bf4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x136bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x136bf8: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x136bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x136bfc: 0x8c70007c  lw          $s0, 0x7C($v1)
    ctx->pc = 0x136bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x136c00: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x136C00u;
    {
        const bool branch_taken_0x136c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C00u;
        // 0x136c04: 0x24110118  addiu       $s1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c00) {
            ctx->pc = 0x136D10u;
            return;
        }
    }
    ctx->pc = 0x136C08u;
    // 0x136c08: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x136c08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x136c0c: 0x0  nop
    ctx->pc = 0x136c0cu;
    // NOP
    ctx->pc = 0x136c10u;
}
