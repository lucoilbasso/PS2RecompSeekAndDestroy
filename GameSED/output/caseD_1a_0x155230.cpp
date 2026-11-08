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

// Function: caseD_1a
// Address: 0x155230 - 0x155260
void caseD_1a_0x155230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x155230");
#endif

    ctx->pc = 0x155230u;

    // 0x155230: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x155234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15523c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x155240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155244: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x155244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x155248: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15524c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15524cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x155250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155254: 0x8054b5a  j           func_152D68
    ctx->pc = 0x155254u;
    ctx->pc = 0x155258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155254u;
    // 0x155258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152D68u;
    MainWeaponReaction__7ApcTank_0x152d68(rdram, ctx, runtime); return;
    ctx->pc = 0x15525Cu;
    // 0x15525c: 0x0  nop
    ctx->pc = 0x15525cu;
    // NOP
    ctx->pc = 0x155260u;
}
