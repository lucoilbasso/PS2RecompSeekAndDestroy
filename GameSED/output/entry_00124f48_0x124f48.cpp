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

// Function: entry_00124f48
// Address: 0x124f48 - 0x124fa8
void entry_00124f48_0x124f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124f48_0x124f48");
#endif

    switch (ctx->pc) {
        case 0x124fa0u: goto label_124fa0;
        default: break;
    }

    ctx->pc = 0x124f48u;

    // 0x124f48: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x124f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x124f4c: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x124f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x124f50: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x124f54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x124f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f58: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x124f58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x124f5c: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x124f60: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x124f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f64: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x124f68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x124f6c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x124f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x124f70: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x124f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124f74: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x124f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x124f78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x124f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x124f7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x124f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x124f80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f84: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x124f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x124f88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124f8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f90: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x124f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x124f94: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x124f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x124f98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124F98u;
    SET_GPR_U32(ctx, 31, 0x124FA0u);
    ctx->pc = 0x124F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F98u;
    // 0x124f9c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124F98u, 0x124FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FA0u;
label_124fa0:
    // 0x124fa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x124fa4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x124fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x124fa8u;
}
