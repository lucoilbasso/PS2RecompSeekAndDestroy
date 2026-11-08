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

// Function: caseD_1
// Address: 0x107930 - 0x107960
void caseD_1_0x107930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x107930");
#endif

    ctx->pc = 0x107930u;

    // 0x107930: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107934: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x107934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x107938: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107938u;
    {
        const bool branch_taken_0x107938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107938u;
        // 0x10793c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107938) {
            ctx->pc = 0x107960u;
            return;
        }
    }
    ctx->pc = 0x107940u;
    // 0x107940: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107944: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107948: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x107948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x10794c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x10794cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x107950: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x107950u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x107954: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x107954u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x107958: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10795c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x10795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x107960u;
}
