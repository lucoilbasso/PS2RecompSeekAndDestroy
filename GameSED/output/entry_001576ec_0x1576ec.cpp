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

// Function: entry_001576ec
// Address: 0x1576ec - 0x157724
void entry_001576ec_0x1576ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576ec_0x1576ec");
#endif

    switch (ctx->pc) {
        case 0x1576f8u: goto label_1576f8;
        case 0x15770cu: goto label_15770c;
        default: break;
    }

    ctx->pc = 0x1576ecu;

    // 0x1576ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576f0: 0xc060994  jal         func_182650
    ctx->pc = 0x1576F0u;
    SET_GPR_U32(ctx, 31, 0x1576F8u);
    ctx->pc = 0x1576F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576F0u;
    // 0x1576f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182650u, 0x1576F0u, 0x1576F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576F8u;
label_1576f8:
    // 0x1576f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1576F8u;
    {
        const bool branch_taken_0x1576f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576F8u;
        // 0x1576fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576f8) {
            ctx->pc = 0x157738u;
            return;
        }
    }
    ctx->pc = 0x157700u;
    // 0x157700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157704: 0xc055d3e  jal         func_1574F8
    ctx->pc = 0x157704u;
    SET_GPR_U32(ctx, 31, 0x15770Cu);
    ctx->pc = 0x157708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157704u;
    // 0x157708: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1574F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1574F8u, 0x157704u, 0x15770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15770Cu;
label_15770c:
    // 0x15770c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x15770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157718: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157718u;
    {
        const bool branch_taken_0x157718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x157718) {
            ctx->pc = 0x15771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157718u;
            // 0x15771c: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157724u;
            return;
        }
    }
    ctx->pc = 0x157720u;
    // 0x157720: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x157720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->pc = 0x157724u;
}
