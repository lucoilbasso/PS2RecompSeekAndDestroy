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

// Function: entry_00117260
// Address: 0x117260 - 0x117298
void entry_00117260_0x117260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117260_0x117260");
#endif

    switch (ctx->pc) {
        case 0x117284u: goto label_117284;
        case 0x117294u: goto label_117294;
        default: break;
    }

    ctx->pc = 0x117260u;

    // 0x117260: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x117260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x117264: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117264u;
    {
        const bool branch_taken_0x117264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117264u;
        // 0x117268: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117264) {
            ctx->pc = 0x1172B0u;
            return;
        }
    }
    ctx->pc = 0x11726Cu;
    // 0x11726c: 0x2e420011  sltiu       $v0, $s2, 0x11
    ctx->pc = 0x11726cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x117270: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x117270u;
    {
        const bool branch_taken_0x117270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117270) {
            ctx->pc = 0x117274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117270u;
            // 0x117274: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117298u;
            return;
        }
    }
    ctx->pc = 0x117278u;
    // 0x117278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11727c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11727Cu;
    SET_GPR_U32(ctx, 31, 0x117284u);
    ctx->pc = 0x117280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11727Cu;
    // 0x117280: 0x268442d8  addiu       $a0, $s4, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11727Cu, 0x117284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117284u;
label_117284:
    // 0x117284: 0x2664c540  addiu       $a0, $s3, -0x3AC0
    ctx->pc = 0x117284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952256));
    // 0x117288: 0x262542e8  addiu       $a1, $s1, 0x42E8
    ctx->pc = 0x117288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17128));
    // 0x11728c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11728Cu;
    SET_GPR_U32(ctx, 31, 0x117294u);
    ctx->pc = 0x117290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11728Cu;
    // 0x117290: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11728Cu, 0x117294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117294u;
label_117294:
    // 0x117294: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x117294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x117298u;
}
