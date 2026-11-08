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

// Function: entry_00193ad4
// Address: 0x193ad4 - 0x193af0
void entry_00193ad4_0x193ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193ad4_0x193ad4");
#endif

    switch (ctx->pc) {
        case 0x193ae8u: goto label_193ae8;
        default: break;
    }

    ctx->pc = 0x193ad4u;

    // 0x193ad4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x193ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x193ad8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x193ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x193adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ae0: 0xc0654c8  jal         func_195320
    ctx->pc = 0x193AE0u;
    SET_GPR_U32(ctx, 31, 0x193AE8u);
    ctx->pc = 0x193AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AE0u;
    // 0x193ae4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195320u, 0x193AE0u, 0x193AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AE8u;
label_193ae8:
    // 0x193ae8: 0xc065500  jal         func_195400
    ctx->pc = 0x193AE8u;
    SET_GPR_U32(ctx, 31, 0x193AF0u);
    ctx->pc = 0x193AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AE8u;
    // 0x193aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195400u, 0x193AE8u, 0x193AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AF0u;
}
