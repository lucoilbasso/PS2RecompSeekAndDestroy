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

// Function: entry_00179370
// Address: 0x179370 - 0x17939c
void entry_00179370_0x179370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179370_0x179370");
#endif

    switch (ctx->pc) {
        case 0x17937cu: goto label_17937c;
        case 0x179394u: goto label_179394;
        default: break;
    }

    ctx->pc = 0x179370u;

    // 0x179370: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179374: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x179374u;
    SET_GPR_U32(ctx, 31, 0x17937Cu);
    ctx->pc = 0x179378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179374u;
    // 0x179378: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4DF0u, 0x179374u, 0x17937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17937Cu;
label_17937c:
    // 0x17937c: 0x2631d180  addiu       $s1, $s1, -0x2E80
    ctx->pc = 0x17937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955392));
    // 0x179380: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x179380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x179384: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x179384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x179388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17938c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17938Cu;
    SET_GPR_U32(ctx, 31, 0x179394u);
    ctx->pc = 0x179390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17938Cu;
    // 0x179390: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17938Cu, 0x179394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179394u;
label_179394:
    // 0x179394: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x179394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x179398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17939cu;
}
