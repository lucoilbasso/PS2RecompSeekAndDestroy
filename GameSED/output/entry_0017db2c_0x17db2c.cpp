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

// Function: entry_0017db2c
// Address: 0x17db2c - 0x17dba8
void entry_0017db2c_0x17db2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db2c_0x17db2c");
#endif

    ctx->pc = 0x17db2cu;

    // 0x17db2c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x17db2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17db30: 0xa53bc  dsll32      $t2, $t2, 14
    ctx->pc = 0x17db30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 14));
    // 0x17db34: 0x9563fffc  lhu         $v1, -0x4($t3)
    ctx->pc = 0x17db34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967292)));
    // 0x17db38: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x17db38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17db3c: 0x94cf8  dsll        $t1, $t1, 19
    ctx->pc = 0x17db3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 19);
    // 0x17db40: 0x9568fffa  lhu         $t0, -0x6($t3)
    ctx->pc = 0x17db40u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967290)));
    // 0x17db44: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17db44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17db48: 0x95640012  lhu         $a0, 0x12($t3)
    ctx->pc = 0x17db48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x17db4c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x17db50: 0x95660004  lhu         $a2, 0x4($t3)
    ctx->pc = 0x17db50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17db54: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x17db54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
    // 0x17db58: 0x9562fff8  lhu         $v0, -0x8($t3)
    ctx->pc = 0x17db58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967288)));
    // 0x17db5c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x17db5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x17db60: 0x8d850008  lw          $a1, 0x8($t4)
    ctx->pc = 0x17db60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17db64: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x17db64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x17db68: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x17db68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x17db6c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x17db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x17db70: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x17db70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x17db74: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x17db78: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x17db78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17db7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17db80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17db84: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x17db84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x17db88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17db8c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17db90: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x17db90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x17db94: 0xfd620030  sd          $v0, 0x30($t3)
    ctx->pc = 0x17db94u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
    // 0x17db98: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x17db98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x17db9c: 0x25ef0050  addiu       $t7, $t7, 0x50
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x17dba0: 0x15c0ff4b  bnez        $t6, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x17DBA0u;
    {
        const bool branch_taken_0x17dba0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBA0u;
        // 0x17dba4: 0x256b0050  addiu       $t3, $t3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dba0) {
            ctx->pc = 0x17D8D0u;
            return;
        }
    }
    ctx->pc = 0x17DBA8u;
}
