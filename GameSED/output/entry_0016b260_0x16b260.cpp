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

// Function: entry_0016b260
// Address: 0x16b260 - 0x16b280
void entry_0016b260_0x16b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b260_0x16b260");
#endif

    switch (ctx->pc) {
        case 0x16b26cu: goto label_16b26c;
        default: break;
    }

    ctx->pc = 0x16b260u;

    // 0x16b260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b264: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x16B264u;
    SET_GPR_U32(ctx, 31, 0x16B26Cu);
    ctx->pc = 0x16B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B264u;
    // 0x16b268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x16B264u, 0x16B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B26Cu;
label_16b26c:
    // 0x16b26c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16b270: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x16b270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x16b274: 0x2453d3d0  addiu       $s3, $v0, -0x2C30
    ctx->pc = 0x16b274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
    // 0x16b278: 0x2472d430  addiu       $s2, $v1, -0x2BD0
    ctx->pc = 0x16b278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
    // 0x16b27c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16b27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16b280u;
}
