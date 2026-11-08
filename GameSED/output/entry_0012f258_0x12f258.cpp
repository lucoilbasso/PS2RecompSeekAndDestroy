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

// Function: entry_0012f258
// Address: 0x12f258 - 0x12f29c
void entry_0012f258_0x12f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f258_0x12f258");
#endif

    switch (ctx->pc) {
        case 0x12f27cu: goto label_12f27c;
        default: break;
    }

    ctx->pc = 0x12f258u;

    // 0x12f258: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x12f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x12f25c: 0x8c700184  lw          $s0, 0x184($v1)
    ctx->pc = 0x12f25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x12f260: 0x1200032c  beqz        $s0, . + 4 + (0x32C << 2)
    ctx->pc = 0x12F260u;
    {
        const bool branch_taken_0x12f260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F260u;
        // 0x12f264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f260) {
            ctx->pc = 0x12FF14u;
            return;
        }
    }
    ctx->pc = 0x12F268u;
    // 0x12f268: 0x8e670138  lw          $a3, 0x138($s3)
    ctx->pc = 0x12f268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x12f26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f274: 0xc048906  jal         func_122418
    ctx->pc = 0x12F274u;
    SET_GPR_U32(ctx, 31, 0x12F27Cu);
    ctx->pc = 0x12F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F274u;
    // 0x12f278: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122418u, 0x12F274u, 0x12F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F27Cu;
label_12f27c:
    // 0x12f27c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f280: 0x12800324  beqz        $s4, . + 4 + (0x324 << 2)
    ctx->pc = 0x12F280u;
    {
        const bool branch_taken_0x12f280 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F280u;
        // 0x12f284: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f280) {
            ctx->pc = 0x12FF14u;
            return;
        }
    }
    ctx->pc = 0x12F288u;
    // 0x12f288: 0x10600322  beqz        $v1, . + 4 + (0x322 << 2)
    ctx->pc = 0x12F288u;
    {
        const bool branch_taken_0x12f288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F288u;
        // 0x12f28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f288) {
            ctx->pc = 0x12FF14u;
            return;
        }
    }
    ctx->pc = 0x12F290u;
    // 0x12f290: 0x8e620138  lw          $v0, 0x138($s3)
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x12f294: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F294u;
    {
        const bool branch_taken_0x12f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f294) {
            ctx->pc = 0x12F298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F294u;
            // 0x12f298: 0xae740138  sw          $s4, 0x138($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F29Cu;
            return;
        }
    }
    ctx->pc = 0x12F29Cu;
}
