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

// Function: entry_0017a1fc
// Address: 0x17a1fc - 0x17a230
void entry_0017a1fc_0x17a1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1fc_0x17a1fc");
#endif

    switch (ctx->pc) {
        case 0x17a20cu: goto label_17a20c;
        case 0x17a214u: goto label_17a214;
        default: break;
    }

    ctx->pc = 0x17a1fcu;

    // 0x17a1fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a204: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17A204u;
    SET_GPR_U32(ctx, 31, 0x17A20Cu);
    ctx->pc = 0x17A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A204u;
    // 0x17a208: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17A204u, 0x17A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A20Cu;
label_17a20c:
    // 0x17a20c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17A20Cu;
    SET_GPR_U32(ctx, 31, 0x17A214u);
    ctx->pc = 0x17A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A20Cu;
    // 0x17a210: 0x24040168  addiu       $a0, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17A20Cu, 0x17A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A214u;
label_17a214:
    // 0x17a214: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a21c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17a220: 0x2442fa20  addiu       $v0, $v0, -0x5E0
    ctx->pc = 0x17a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965792));
    // 0x17a224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a228: 0xc05e896  jal         func_17A258
    ctx->pc = 0x17A228u;
    SET_GPR_U32(ctx, 31, 0x17A230u);
    ctx->pc = 0x17A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A228u;
    // 0x17a22c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x17A228u, 0x17A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A230u;
}
