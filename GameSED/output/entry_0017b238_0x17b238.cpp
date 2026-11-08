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

// Function: entry_0017b238
// Address: 0x17b238 - 0x17b274
void entry_0017b238_0x17b238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b238_0x17b238");
#endif

    switch (ctx->pc) {
        case 0x17b244u: goto label_17b244;
        case 0x17b258u: goto label_17b258;
        case 0x17b270u: goto label_17b270;
        default: break;
    }

    ctx->pc = 0x17b238u;

    // 0x17b238: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b23c: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17B23Cu;
    SET_GPR_U32(ctx, 31, 0x17B244u);
    ctx->pc = 0x17B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B23Cu;
    // 0x17b240: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17B23Cu, 0x17B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B244u;
label_17b244:
    // 0x17b244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b248: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x17B248u;
    {
        const bool branch_taken_0x17b248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x17B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B248u;
        // 0x17b24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b248) {
            ctx->pc = 0x17B27Cu;
            return;
        }
    }
    ctx->pc = 0x17B250u;
    // 0x17b250: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17B250u;
    SET_GPR_U32(ctx, 31, 0x17B258u);
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17B250u, 0x17B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B258u;
label_17b258:
    // 0x17b258: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17b25c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B25Cu;
    {
        const bool branch_taken_0x17b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B25Cu;
        // 0x17b260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b25c) {
            ctx->pc = 0x17B274u;
            return;
        }
    }
    ctx->pc = 0x17B264u;
    // 0x17b264: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17b268: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17B268u;
    SET_GPR_U32(ctx, 31, 0x17B270u);
    ctx->pc = 0x17B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B268u;
    // 0x17b26c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17B268u, 0x17B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B270u;
label_17b270:
    // 0x17b270: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17b270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17b274u;
}
