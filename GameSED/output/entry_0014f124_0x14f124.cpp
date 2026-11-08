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

// Function: entry_0014f124
// Address: 0x14f124 - 0x14f150
void entry_0014f124_0x14f124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f124_0x14f124");
#endif

    switch (ctx->pc) {
        case 0x14f14cu: goto label_14f14c;
        default: break;
    }

    ctx->pc = 0x14f124u;

    // 0x14f124: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14f128: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14f128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14f12c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F12Cu;
    {
        const bool branch_taken_0x14f12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f12c) {
            ctx->pc = 0x14F130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F12Cu;
            // 0x14f130: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F150u;
            return;
        }
    }
    ctx->pc = 0x14F134u;
    // 0x14f134: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14f138: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x14f138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x14f13c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F13Cu;
    {
        const bool branch_taken_0x14f13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f13c) {
            ctx->pc = 0x14F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F13Cu;
            // 0x14f140: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F150u;
            return;
        }
    }
    ctx->pc = 0x14F144u;
    // 0x14f144: 0xc053dbc  jal         func_14F6F0
    ctx->pc = 0x14F144u;
    SET_GPR_U32(ctx, 31, 0x14F14Cu);
    ctx->pc = 0x14F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F144u;
    // 0x14f148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F6F0u, 0x14F144u, 0x14F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F14Cu;
label_14f14c:
    // 0x14f14c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x14f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    ctx->pc = 0x14f150u;
}
