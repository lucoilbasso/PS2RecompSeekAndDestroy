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

// Function: entry_00191240
// Address: 0x191240 - 0x191294
void entry_00191240_0x191240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191240_0x191240");
#endif

    switch (ctx->pc) {
        case 0x19125cu: goto label_19125c;
        case 0x191264u: goto label_191264;
        case 0x191288u: goto label_191288;
        default: break;
    }

    ctx->pc = 0x191240u;

    // 0x191240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x191244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x191248: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x191248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19124c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x191250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191254: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x191254u;
    SET_GPR_U32(ctx, 31, 0x19125Cu);
    ctx->pc = 0x191258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191254u;
    // 0x191258: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x191254u, 0x19125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19125Cu;
label_19125c:
    // 0x19125c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x19125Cu;
    SET_GPR_U32(ctx, 31, 0x191264u);
    ctx->pc = 0x191260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19125Cu;
    // 0x191260: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x19125Cu, 0x191264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191264u;
label_191264:
    // 0x191264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19126c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x19126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x191270: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x191270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x191274: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x191274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191278: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x191278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x19127c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19127cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191280: 0xc0644ae  jal         func_1912B8
    ctx->pc = 0x191280u;
    SET_GPR_U32(ctx, 31, 0x191288u);
    ctx->pc = 0x191284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191280u;
    // 0x191284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1912B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1912B8u, 0x191280u, 0x191288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191288u;
label_191288:
    // 0x191288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19128c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x19128Cu;
    SET_GPR_U32(ctx, 31, 0x191294u);
    ctx->pc = 0x191290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19128Cu;
    // 0x191290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x19128Cu, 0x191294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191294u;
}
