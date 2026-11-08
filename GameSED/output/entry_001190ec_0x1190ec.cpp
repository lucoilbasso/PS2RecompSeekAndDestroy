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

// Function: entry_001190ec
// Address: 0x1190ec - 0x119150
void entry_001190ec_0x1190ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001190ec_0x1190ec");
#endif

    switch (ctx->pc) {
        case 0x119104u: goto label_119104;
        case 0x119110u: goto label_119110;
        case 0x11911cu: goto label_11911c;
        case 0x119128u: goto label_119128;
        default: break;
    }

    ctx->pc = 0x1190ecu;

    // 0x1190ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1190ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1190f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1190f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1190f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1190f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1190f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1190f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1190fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1190FCu;
    SET_GPR_U32(ctx, 31, 0x119104u);
    ctx->pc = 0x119100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190FCu;
    // 0x119100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1190FCu, 0x119104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119104u;
label_119104:
    // 0x119104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119108: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x119108u;
    SET_GPR_U32(ctx, 31, 0x119110u);
    ctx->pc = 0x11910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119108u;
    // 0x11910c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x119108u, 0x119110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119110u;
label_119110:
    // 0x119110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119114: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x119114u;
    SET_GPR_U32(ctx, 31, 0x11911Cu);
    ctx->pc = 0x119118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119114u;
    // 0x119118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x119114u, 0x11911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11911Cu;
label_11911c:
    // 0x11911c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119120: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x119120u;
    SET_GPR_U32(ctx, 31, 0x119128u);
    ctx->pc = 0x119124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119120u;
    // 0x119124: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x119120u, 0x119128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119128u;
label_119128:
    // 0x119128: 0x240424d0  addiu       $a0, $zero, 0x24D0
    ctx->pc = 0x119128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11912c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11912cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119130: 0x2248818  mult        $s1, $s1, $a0
    ctx->pc = 0x119130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x119134: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x119134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x119138: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x119138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11913c: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x11913cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x119140: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x119140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x119144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119148: 0xac450c0c  sw          $a1, 0xC0C($v0)
    ctx->pc = 0x119148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 5));
    // 0x11914c: 0x26310c10  addiu       $s1, $s1, 0xC10
    ctx->pc = 0x11914cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3088));
    ctx->pc = 0x119150u;
}
