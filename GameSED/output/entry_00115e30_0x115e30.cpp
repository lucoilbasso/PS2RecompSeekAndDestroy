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

// Function: entry_00115e30
// Address: 0x115e30 - 0x115e70
void entry_00115e30_0x115e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e30_0x115e30");
#endif

    switch (ctx->pc) {
        case 0x115e50u: goto label_115e50;
        default: break;
    }

    ctx->pc = 0x115e30u;

    // 0x115e30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115e34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x115e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x115e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115e40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115e44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x115e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x115e48: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115E48u;
    SET_GPR_U32(ctx, 31, 0x115E50u);
    ctx->pc = 0x115E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E48u;
    // 0x115e4c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115E48u, 0x115E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E50u;
label_115e50:
    // 0x115e50: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x115e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115e54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x115e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x115e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115e60: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x115e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x115e64: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x115e64u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115e68: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x115e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x115e6c: 0x0  nop
    ctx->pc = 0x115e6cu;
    // NOP
    ctx->pc = 0x115e70u;
}
