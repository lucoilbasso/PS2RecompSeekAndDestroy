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

// Function: entry_0012e604
// Address: 0x12e604 - 0x12e660
void entry_0012e604_0x12e604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e604_0x12e604");
#endif

    switch (ctx->pc) {
        case 0x12e618u: goto label_12e618;
        case 0x12e620u: goto label_12e620;
        case 0x12e628u: goto label_12e628;
        case 0x12e630u: goto label_12e630;
        default: break;
    }

    ctx->pc = 0x12e604u;

    // 0x12e604: 0x2a6200d0  slti        $v0, $s3, 0xD0
    ctx->pc = 0x12e604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)208) ? 1 : 0);
    // 0x12e608: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12E608u;
    {
        const bool branch_taken_0x12e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e608) {
            ctx->pc = 0x12E60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E608u;
            // 0x12e60c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E570u;
            return;
        }
    }
    ctx->pc = 0x12E610u;
    // 0x12e610: 0xc048508  jal         func_121420
    ctx->pc = 0x12E610u;
    SET_GPR_U32(ctx, 31, 0x12E618u);
    ctx->pc = 0x121420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121420u, 0x12E610u, 0x12E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E618u;
label_12e618:
    // 0x12e618: 0xc047fb2  jal         func_11FEC8
    ctx->pc = 0x12E618u;
    SET_GPR_U32(ctx, 31, 0x12E620u);
    ctx->pc = 0x11FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FEC8u, 0x12E618u, 0x12E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E620u;
label_12e620:
    // 0x12e620: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x12E620u;
    SET_GPR_U32(ctx, 31, 0x12E628u);
    ctx->pc = 0x1202F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202F0u, 0x12E620u, 0x12E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E628u;
label_12e628:
    // 0x12e628: 0xc0481a4  jal         func_120690
    ctx->pc = 0x12E628u;
    SET_GPR_U32(ctx, 31, 0x12E630u);
    ctx->pc = 0x120690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120690u, 0x12E628u, 0x12E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E630u;
label_12e630:
    // 0x12e630: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12e630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e634: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x12e634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12e638: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x12e638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e63c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x12e63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12e640: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x12e640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e644: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x12e644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e648: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x12e648u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12e64c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x12e64cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12e650: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x12e650u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12e654: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x12e654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12e658: 0x3e00008  jr          $ra
    ctx->pc = 0x12E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E658u;
        // 0x12e65c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E660u;
}
