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

// Function: caseD_5
// Address: 0x107aa0 - 0x107ac0
void caseD_5_0x107aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x107aa0");
#endif

    ctx->pc = 0x107aa0u;

    // 0x107aa0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107aa4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x107aa8: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x107AA8u;
    {
        const bool branch_taken_0x107aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107aa8) {
            ctx->pc = 0x107AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107AA8u;
            // 0x107aac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107AB0u;
    // 0x107ab0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107ab4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107ab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107ab8: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x107ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x107abc: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x107abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    ctx->pc = 0x107ac0u;
}
