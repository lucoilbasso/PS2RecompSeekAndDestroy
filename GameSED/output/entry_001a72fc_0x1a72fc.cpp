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

// Function: entry_001a72fc
// Address: 0x1a72fc - 0x1a7328
void entry_001a72fc_0x1a72fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a72fc_0x1a72fc");
#endif

    ctx->pc = 0x1a72fcu;

label_1a72fc:
    // 0x1a72fc: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1a72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1a7300:
    // 0x1a7300: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1a7300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a7304:
    // 0x1a7304: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1a7308:
    if (ctx->pc == 0x1A7308u) {
        ctx->pc = 0x1A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7304u;
        // 0x1a7308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A730Cu;
        goto label_1a730c;
    }
    ctx->pc = 0x1A7304u;
    {
        const bool branch_taken_0x1a7304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7304u;
        // 0x1a7308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7304) {
            ctx->pc = 0x1A7370u;
            return;
        }
    }
    ctx->pc = 0x1A730Cu;
label_1a730c:
    // 0x1a730c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a7310:
    // 0x1a7310: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a7314:
    // 0x1a7314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a7314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a7318:
    // 0x1a7318: 0x8c639480  lw          $v1, -0x6B80($v1)
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939776)));
label_1a731c:
    // 0x1a731c: 0x600008  jr          $v1
label_1a7320:
    if (ctx->pc == 0x1A7320u) {
        ctx->pc = 0x1A7324u;
        goto label_1a7324;
    }
    ctx->pc = 0x1A731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A731Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A7324u;
label_1a7324:
    // 0x1a7324: 0x0  nop
    ctx->pc = 0x1a7324u;
    // NOP
    ctx->pc = 0x1a7328u;
}
