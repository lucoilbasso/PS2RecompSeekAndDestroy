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

// Function: entry_00136b40
// Address: 0x136b40 - 0x136b7c
void entry_00136b40_0x136b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b40_0x136b40");
#endif

    switch (ctx->pc) {
        case 0x136b54u: goto label_136b54;
        default: break;
    }

    ctx->pc = 0x136b40u;

label_136b40:
    // 0x136b40: 0x5a60000f  blezl       $s3, . + 4 + (0xF << 2)
label_136b44:
    if (ctx->pc == 0x136B44u) {
        ctx->pc = 0x136B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B40u;
        // 0x136b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B48u;
        goto label_136b48;
    }
    ctx->pc = 0x136B40u;
    {
        const bool branch_taken_0x136b40 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x136b40) {
            ctx->pc = 0x136B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136B40u;
            // 0x136b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B80u;
            return;
        }
    }
    ctx->pc = 0x136B48u;
label_136b48:
    // 0x136b48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_136b4c:
    // 0x136b4c: 0xc0684de  jal         func_1A1378
label_136b50:
    if (ctx->pc == 0x136B50u) {
        ctx->pc = 0x136B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B4Cu;
        // 0x136b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B54u;
        goto label_136b54;
    }
    ctx->pc = 0x136B4Cu;
    SET_GPR_U32(ctx, 31, 0x136B54u);
    ctx->pc = 0x136B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B4Cu;
    // 0x136b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x136B4Cu, 0x136B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B54u;
label_136b54:
    // 0x136b54: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_136b58:
    if (ctx->pc == 0x136B58u) {
        ctx->pc = 0x136B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B54u;
        // 0x136b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B5Cu;
        goto label_136b5c;
    }
    ctx->pc = 0x136B54u;
    {
        const bool branch_taken_0x136b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136b54) {
            ctx->pc = 0x136B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136B54u;
            // 0x136b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B80u;
            return;
        }
    }
    ctx->pc = 0x136B5Cu;
label_136b5c:
    // 0x136b5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_136b60:
    // 0x136b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136b64:
    // 0x136b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136b68:
    // 0x136b68: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136b6c:
    // 0x136b6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136b70:
    // 0x136b70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136b74:
    // 0x136b74: 0x60f809  jalr        $v1
label_136b78:
    if (ctx->pc == 0x136B78u) {
        ctx->pc = 0x136B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B74u;
        // 0x136b78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B7Cu;
        goto label_fallthrough_0x136b74;
    }
    ctx->pc = 0x136B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136B7Cu);
        ctx->pc = 0x136B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B74u;
        // 0x136b78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B74u, 0x136B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x136b74:
    ctx->pc = 0x136B7Cu;
}
