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

// Function: entry_0010b3ec
// Address: 0x10b3ec - 0x10b428
void entry_0010b3ec_0x10b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b3ec_0x10b3ec");
#endif

    switch (ctx->pc) {
        case 0x10b3f4u: goto label_10b3f4;
        case 0x10b400u: goto label_10b400;
        case 0x10b424u: goto label_10b424;
        default: break;
    }

    ctx->pc = 0x10b3ecu;

    // 0x10b3ec: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x10B3ECu;
    SET_GPR_U32(ctx, 31, 0x10B3F4u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x10B3ECu, 0x10B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3F4u;
label_10b3f4:
    // 0x10b3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B3F8u;
    SET_GPR_U32(ctx, 31, 0x10B400u);
    ctx->pc = 0x10B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3F8u;
    // 0x10b3fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B3F8u, 0x10B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B400u;
label_10b400:
    // 0x10b400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b404: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b408: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10b408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10b40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b414: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B414u;
    {
        const bool branch_taken_0x10b414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B414u;
        // 0x10b418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b414) {
            ctx->pc = 0x10B428u;
            return;
        }
    }
    ctx->pc = 0x10B41Cu;
    // 0x10b41c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B41Cu;
    SET_GPR_U32(ctx, 31, 0x10B424u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B41Cu, 0x10B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B424u;
label_10b424:
    // 0x10b424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10b428u;
}
