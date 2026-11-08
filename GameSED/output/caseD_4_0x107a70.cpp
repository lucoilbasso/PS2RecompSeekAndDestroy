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

// Function: caseD_4
// Address: 0x107a70 - 0x107a90
void caseD_4_0x107a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x107a70");
#endif

    ctx->pc = 0x107a70u;

    // 0x107a70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107a74: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x107a78: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x107A78u;
    {
        const bool branch_taken_0x107a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a78) {
            ctx->pc = 0x107A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A78u;
            // 0x107a7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107A80u;
    // 0x107a80: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107a84: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107a88: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x107a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
    // 0x107a8c: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x107a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    ctx->pc = 0x107a90u;
}
