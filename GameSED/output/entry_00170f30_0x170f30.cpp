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

// Function: entry_00170f30
// Address: 0x170f30 - 0x170fa8
void entry_00170f30_0x170f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f30_0x170f30");
#endif

    switch (ctx->pc) {
        case 0x170f48u: goto label_170f48;
        case 0x170f64u: goto label_170f64;
        default: break;
    }

    ctx->pc = 0x170f30u;

    // 0x170f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170f3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f40: 0xc05c57e  jal         func_1715F8
    ctx->pc = 0x170F40u;
    SET_GPR_U32(ctx, 31, 0x170F48u);
    ctx->pc = 0x170F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F40u;
    // 0x170f44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F8u, 0x170F40u, 0x170F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F48u;
label_170f48:
    // 0x170f48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170f4c: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x170f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x170f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f54: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x170f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f5c: 0xc071254  jal         func_1C4950
    ctx->pc = 0x170F5Cu;
    SET_GPR_U32(ctx, 31, 0x170F64u);
    ctx->pc = 0x170F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F5Cu;
    // 0x170f60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x170F5Cu, 0x170F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F64u;
label_170f64:
    // 0x170f64: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x170f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x170f68: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x170f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x170f6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x170f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x170f70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x170f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x170f74: 0x8e080058  lw          $t0, 0x58($s0)
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x170f78: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170f80: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x170f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x170f84: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x170f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x170f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f98: 0x24094000  addiu       $t1, $zero, 0x4000
    ctx->pc = 0x170f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x170f9c: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x170f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x170fa0: 0x8071254  j           func_1C4950
    ctx->pc = 0x170FA0u;
    ctx->pc = 0x170FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FA0u;
    // 0x170fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    sceSdRemote_0x1c4950(rdram, ctx, runtime); return;
    ctx->pc = 0x170FA8u;
}
