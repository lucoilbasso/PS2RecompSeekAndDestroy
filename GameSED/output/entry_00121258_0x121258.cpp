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

// Function: entry_00121258
// Address: 0x121258 - 0x121280
void entry_00121258_0x121258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121258_0x121258");
#endif

    switch (ctx->pc) {
        case 0x121278u: goto label_121278;
        default: break;
    }

    ctx->pc = 0x121258u;

    // 0x121258: 0x54470009  bnel        $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x121258u;
    {
        const bool branch_taken_0x121258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x121258) {
            ctx->pc = 0x12125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121258u;
            // 0x12125c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x121260u;
    // 0x121260: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121264: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x121264u;
    {
        const bool branch_taken_0x121264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x121264) {
            ctx->pc = 0x121268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121264u;
            // 0x121268: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x12126Cu;
    // 0x12126c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121270: 0xc04780a  jal         func_11E028
    ctx->pc = 0x121270u;
    SET_GPR_U32(ctx, 31, 0x121278u);
    ctx->pc = 0x121274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121270u;
    // 0x121274: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E028u, 0x121270u, 0x121278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121278u;
label_121278:
    // 0x121278: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x121278u;
    {
        const bool branch_taken_0x121278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121278u;
        // 0x12127c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121278) {
            ctx->pc = 0x1212ACu;
            return;
        }
    }
    ctx->pc = 0x121280u;
}
