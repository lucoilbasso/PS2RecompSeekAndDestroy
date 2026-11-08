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

// Function: entry_00122f7c
// Address: 0x122f7c - 0x122fe8
void entry_00122f7c_0x122f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f7c_0x122f7c");
#endif

    switch (ctx->pc) {
        case 0x122fe0u: goto label_122fe0;
        default: break;
    }

    ctx->pc = 0x122f7cu;

    // 0x122f7c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x122F7Cu;
    {
        const bool branch_taken_0x122f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F7Cu;
        // 0x122f80: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f7c) {
            ctx->pc = 0x12307Cu;
            return;
        }
    }
    ctx->pc = 0x122F84u;
    // 0x122f84: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x122f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x122f88: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x122f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122f8c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x122f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x122f90: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x122f94: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x122f94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x122f98: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x122f9c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x122f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fa0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x122fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x122fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x122fa8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x122fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x122facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x122fb0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x122fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x122fb4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x122fb8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x122fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x122fbc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x122fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x122fc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122fc4: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x122fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x122fc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x122fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x122fcc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x122fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122fd0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x122fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x122fd4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x122fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x122fd8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122FD8u;
    SET_GPR_U32(ctx, 31, 0x122FE0u);
    ctx->pc = 0x122FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FD8u;
    // 0x122fdc: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122FD8u, 0x122FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FE0u;
label_122fe0:
    // 0x122fe0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122fe4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x122fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x122fe8u;
}
