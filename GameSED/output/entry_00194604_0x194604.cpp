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

// Function: entry_00194604
// Address: 0x194604 - 0x194648
void entry_00194604_0x194604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194604_0x194604");
#endif

    ctx->pc = 0x194604u;

    // 0x194604: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x194604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x194608: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x194608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19460c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194610: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x194610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194614: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x194614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194618: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x194618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x19461c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x194620: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x194620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x194624: 0x2f02b  sltu        $fp, $zero, $v0
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194628: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19462c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x19462cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194630: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x194630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194634: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194634u;
    {
        const bool branch_taken_0x194634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194634u;
        // 0x194638: 0x8c570164  lw          $s7, 0x164($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194634) {
            ctx->pc = 0x194648u;
            return;
        }
    }
    ctx->pc = 0x19463Cu;
    // 0x19463c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194640: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x194640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x194644: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x194644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x194648u;
}
