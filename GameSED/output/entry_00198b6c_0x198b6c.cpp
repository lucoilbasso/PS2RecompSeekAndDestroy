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

// Function: entry_00198b6c
// Address: 0x198b6c - 0x198be0
void entry_00198b6c_0x198b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b6c_0x198b6c");
#endif

    switch (ctx->pc) {
        case 0x198b80u: goto label_198b80;
        case 0x198ba4u: goto label_198ba4;
        default: break;
    }

    ctx->pc = 0x198b6cu;

    // 0x198b6c: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x198b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x198b70: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x198b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x198b74: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x198b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x198b78: 0xc06539e  jal         func_194E78
    ctx->pc = 0x198B78u;
    SET_GPR_U32(ctx, 31, 0x198B80u);
    ctx->pc = 0x198B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B78u;
    // 0x198b7c: 0x3416ffff  ori         $s6, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E78u, 0x198B78u, 0x198B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B80u;
label_198b80:
    // 0x198b80: 0x96030150  lhu         $v1, 0x150($s0)
    ctx->pc = 0x198b80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x198b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x198b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b8c: 0x8e110158  lw          $s1, 0x158($s0)
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x198b90: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x198b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x198b94: 0x8e130160  lw          $s3, 0x160($s0)
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x198b98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x198b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x198b9c: 0xc066426  jal         func_199098
    ctx->pc = 0x198B9Cu;
    SET_GPR_U32(ctx, 31, 0x198BA4u);
    ctx->pc = 0x198BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B9Cu;
    // 0x198ba0: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199098u, 0x198B9Cu, 0x198BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BA4u;
label_198ba4:
    // 0x198ba4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198ba8: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x198bac: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x198bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x198bb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bb4: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198bb8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x198bbc: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x198bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
    // 0x198bc0: 0x96350030  lhu         $s5, 0x30($s1)
    ctx->pc = 0x198bc0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x198bc4: 0x8e310038  lw          $s1, 0x38($s1)
    ctx->pc = 0x198bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x198bc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198BC8u;
    {
        const bool branch_taken_0x198bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BC8u;
        // 0x198bcc: 0xafb1006c  sw          $s1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bc8) {
            ctx->pc = 0x198BE0u;
            return;
        }
    }
    ctx->pc = 0x198BD0u;
    // 0x198bd0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x198bd4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x198bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x198bd8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198bdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x198bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x198be0u;
}
