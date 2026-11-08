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

// Function: entry_00177800
// Address: 0x177800 - 0x177838
void entry_00177800_0x177800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177800_0x177800");
#endif

    ctx->pc = 0x177800u;

    // 0x177800: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x177804: 0x1261007  srav        $v0, $a2, $t1
    ctx->pc = 0x177804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x177808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x177808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17780c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17780Cu;
    {
        const bool branch_taken_0x17780c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17780c) {
            ctx->pc = 0x177810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17780Cu;
            // 0x177810: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177860u;
            return;
        }
    }
    ctx->pc = 0x177814u;
    // 0x177814: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x177814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x177818: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x177818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x17781c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x177820: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x177824: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x177824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x177828: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x177828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17782c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177830: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x177830u;
    {
        const bool branch_taken_0x177830 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x177830) {
            ctx->pc = 0x177834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177830u;
            // 0x177834: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177838u;
            return;
        }
    }
    ctx->pc = 0x177838u;
}
