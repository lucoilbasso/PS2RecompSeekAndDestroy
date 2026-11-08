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

// Function: entry_00170fb4
// Address: 0x170fb4 - 0x170ff8
void entry_00170fb4_0x170fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170fb4_0x170fb4");
#endif

    switch (ctx->pc) {
        case 0x170fc0u: goto label_170fc0;
        default: break;
    }

    ctx->pc = 0x170fb4u;

    // 0x170fb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170fb8: 0xc05c57e  jal         func_1715F8
    ctx->pc = 0x170FB8u;
    SET_GPR_U32(ctx, 31, 0x170FC0u);
    ctx->pc = 0x170FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FB8u;
    // 0x170fbc: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F8u, 0x170FB8u, 0x170FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FC0u;
label_170fc0:
    // 0x170fc0: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x170fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x170fc4: 0x8e090048  lw          $t1, 0x48($s0)
    ctx->pc = 0x170fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x170fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170fcc: 0x8e0a0050  lw          $t2, 0x50($s0)
    ctx->pc = 0x170fccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x170fd0: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x170fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x170fd4: 0x252303ff  addiu       $v1, $t1, 0x3FF
    ctx->pc = 0x170fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x170fd8: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x170fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x170fdc: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x170fdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x170fe0: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x170fe4: 0x94a83  sra         $t1, $t1, 10
    ctx->pc = 0x170fe4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x170fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170fec: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x170fecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x170ff0: 0xc071254  jal         func_1C4950
    ctx->pc = 0x170FF0u;
    SET_GPR_U32(ctx, 31, 0x170FF8u);
    ctx->pc = 0x170FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FF0u;
    // 0x170ff4: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x170FF0u, 0x170FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FF8u;
}
