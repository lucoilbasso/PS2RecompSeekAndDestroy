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

// Function: entry_0014d73c
// Address: 0x14d73c - 0x14d778
void entry_0014d73c_0x14d73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d73c_0x14d73c");
#endif

    switch (ctx->pc) {
        case 0x14d744u: goto label_14d744;
        default: break;
    }

    ctx->pc = 0x14d73cu;

    // 0x14d73c: 0xc053780  jal         func_14DE00
    ctx->pc = 0x14D73Cu;
    SET_GPR_U32(ctx, 31, 0x14D744u);
    ctx->pc = 0x14D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D73Cu;
    // 0x14d740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE00u, 0x14D73Cu, 0x14D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D744u;
label_14d744:
    // 0x14d744: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x14d744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x14d748: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x14d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
    // 0x14d74c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14D74Cu;
    {
        const bool branch_taken_0x14d74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D74Cu;
        // 0x14d750: 0x240324d0  addiu       $v1, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d74c) {
            ctx->pc = 0x14D838u;
            return;
        }
    }
    ctx->pc = 0x14D754u;
    // 0x14d754: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x14d754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x14d758: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x14d758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14d75c: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x14d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x14d760: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d764: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14d764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d768: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14d768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d76c: 0x8c930fe8  lw          $s3, 0xFE8($a0)
    ctx->pc = 0x14d76cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x14d770: 0x24700ff2  addiu       $s0, $v1, 0xFF2
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4082));
    // 0x14d774: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x14d774u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x14d778u;
}
