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

// Function: entry_00170060
// Address: 0x170060 - 0x170088
void entry_00170060_0x170060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170060_0x170060");
#endif

    switch (ctx->pc) {
        case 0x170074u: goto label_170074;
        case 0x170084u: goto label_170084;
        default: break;
    }

    ctx->pc = 0x170060u;

    // 0x170060: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x170060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x170064: 0x263012d0  addiu       $s0, $s1, 0x12D0
    ctx->pc = 0x170064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x170068: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x17006c: 0xc05cfb6  jal         func_173ED8
    ctx->pc = 0x17006Cu;
    SET_GPR_U32(ctx, 31, 0x170074u);
    ctx->pc = 0x170070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17006Cu;
    // 0x170070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173ED8u, 0x17006Cu, 0x170074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170074u;
label_170074:
    // 0x170074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170078: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x17007c: 0xc05d056  jal         func_174158
    ctx->pc = 0x17007Cu;
    SET_GPR_U32(ctx, 31, 0x170084u);
    ctx->pc = 0x170080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17007Cu;
    // 0x170080: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174158u, 0x17007Cu, 0x170084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170084u;
label_170084:
    // 0x170084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170088u;
}
