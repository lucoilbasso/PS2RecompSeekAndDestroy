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

// Function: entry_00148b28
// Address: 0x148b28 - 0x148bb8
void entry_00148b28_0x148b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b28_0x148b28");
#endif

    ctx->pc = 0x148b28u;

    // 0x148b28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x148b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x148b2c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x148b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x148b30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x148b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x148b34: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x148b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x148b38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x148b3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148b40: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x148b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x148b44: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148b48: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x148b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x148b4c: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x148b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x148b50: 0x34a51040  ori         $a1, $a1, 0x1040
    ctx->pc = 0x148b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4160);
    // 0x148b54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x148b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b58: 0x34c69020  ori         $a2, $a2, 0x9020
    ctx->pc = 0x148b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36896);
    // 0x148b5c: 0x34e79010  ori         $a3, $a3, 0x9010
    ctx->pc = 0x148b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)36880);
    // 0x148b60: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148b64: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x148b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x148b68: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x148b68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x148b6c: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x148b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x148b70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x148b70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x148b74: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x148b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x148b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148b7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148b80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x148B80u;
    {
        const bool branch_taken_0x148b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B80u;
        // 0x148b84: 0x3c041200  lui         $a0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b80) {
            ctx->pc = 0x148BF0u;
            return;
        }
    }
    ctx->pc = 0x148B88u;
    // 0x148b88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148b8c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x148b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x148b90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148b94: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x148b94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x148b98: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x148b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x148b9c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x148b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x148ba0: 0x34a53000  ori         $a1, $a1, 0x3000
    ctx->pc = 0x148ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x148ba4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x148ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148ba8: 0x34c63c10  ori         $a2, $a2, 0x3C10
    ctx->pc = 0x148ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15376);
    // 0x148bac: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bb4: 0x0  nop
    ctx->pc = 0x148bb4u;
    // NOP
    ctx->pc = 0x148bb8u;
}
