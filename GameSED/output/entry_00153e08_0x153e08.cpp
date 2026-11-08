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

// Function: entry_00153e08
// Address: 0x153e08 - 0x153e40
void entry_00153e08_0x153e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153e08_0x153e08");
#endif

    switch (ctx->pc) {
        case 0x153e38u: goto label_153e38;
        default: break;
    }

    ctx->pc = 0x153e08u;

    // 0x153e08: 0x8cc41254  lw          $a0, 0x1254($a2)
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4692)));
    // 0x153e0c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x153e10: 0x24027c00  addiu       $v0, $zero, 0x7C00
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
    // 0x153e14: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x153e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153e18: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x153e18u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x153e1c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x153e1cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153e20: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x153e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x153e24: 0x2865599a  slti        $a1, $v1, 0x599A
    ctx->pc = 0x153e24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22938) ? 1 : 0);
    // 0x153e28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153E28u;
    {
        const bool branch_taken_0x153e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E28u;
        // 0x153e2c: 0xacc31254  sw          $v1, 0x1254($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e28) {
            ctx->pc = 0x153E40u;
            return;
        }
    }
    ctx->pc = 0x153E30u;
    // 0x153e30: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x153E30u;
    SET_GPR_U32(ctx, 31, 0x153E38u);
    ctx->pc = 0x153E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E30u;
    // 0x153e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153E30u, 0x153E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E38u;
label_153e38:
    // 0x153e38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x153E38u;
    {
        const bool branch_taken_0x153e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E38u;
        // 0x153e3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e38) {
            ctx->pc = 0x153EA0u;
            return;
        }
    }
    ctx->pc = 0x153E40u;
}
