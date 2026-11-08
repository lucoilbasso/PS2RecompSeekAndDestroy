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

// Function: entry_001886b8
// Address: 0x1886b8 - 0x188720
void entry_001886b8_0x1886b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001886b8_0x1886b8");
#endif

    ctx->pc = 0x1886b8u;

label_1886b8:
    // 0x1886b8: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1886bc: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x1886bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1886c0: 0xce2021  addu        $a0, $a2, $t6
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x1886c4: 0x24e300d0  addiu       $v1, $a3, 0xD0
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x1886c8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1886c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1886ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1886d0: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1886d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1886d4: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x1886d8: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1886dc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1886dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x1886e0: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x1886e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x1886e4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1886e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1886e8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1886e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1886ec: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1886ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1886f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1886f4: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1886f8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1886f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1886fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1886FCu;
    {
        const bool branch_taken_0x1886fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886FCu;
        // 0x188700: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886fc) {
            ctx->pc = 0x1886B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1886b8;
        }
    }
    ctx->pc = 0x188704u;
    // 0x188704: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x188708: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x18870c: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x18870cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x188710: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x188710u;
    {
        const bool branch_taken_0x188710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188710) {
            ctx->pc = 0x188714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188710u;
            // 0x188714: 0x8e8301bc  lw          $v1, 0x1BC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188688u;
            return;
        }
    }
    ctx->pc = 0x188718u;
    // 0x188718: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x188718u;
    {
        const bool branch_taken_0x188718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188718u;
        // 0x18871c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188718) {
            ctx->pc = 0x1887ACu;
            return;
        }
    }
    ctx->pc = 0x188720u;
}
