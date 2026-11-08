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

// Function: entry_0014625c
// Address: 0x14625c - 0x146290
void entry_0014625c_0x14625c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014625c_0x14625c");
#endif

    switch (ctx->pc) {
        case 0x14626cu: goto label_14626c;
        case 0x146280u: goto label_146280;
        default: break;
    }

    ctx->pc = 0x14625cu;

    // 0x14625c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146264: 0xc051588  jal         func_145620
    ctx->pc = 0x146264u;
    SET_GPR_U32(ctx, 31, 0x14626Cu);
    ctx->pc = 0x146268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146264u;
    // 0x146268: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145620u, 0x146264u, 0x14626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14626Cu;
label_14626c:
    // 0x14626c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14626cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146270: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x146270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x146274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146278: 0xc0619da  jal         func_186768
    ctx->pc = 0x146278u;
    SET_GPR_U32(ctx, 31, 0x146280u);
    ctx->pc = 0x14627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146278u;
    // 0x14627c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186768u, 0x146278u, 0x146280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146280u;
label_146280:
    // 0x146280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146284: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x146284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146288: 0xc0693b2  jal         func_1A4EC8
    ctx->pc = 0x146288u;
    SET_GPR_U32(ctx, 31, 0x146290u);
    ctx->pc = 0x14628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146288u;
    // 0x14628c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4EC8u, 0x146288u, 0x146290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146290u;
}
