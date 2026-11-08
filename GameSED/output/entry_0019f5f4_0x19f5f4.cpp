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

// Function: entry_0019f5f4
// Address: 0x19f5f4 - 0x19f648
void entry_0019f5f4_0x19f5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5f4_0x19f5f4");
#endif

    ctx->pc = 0x19f5f4u;

    // 0x19f5f4: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19f5f8: 0x51783  sra         $v0, $a1, 30
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 30));
    // 0x19f5fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f600: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19F600u;
    {
        const bool branch_taken_0x19f600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F600u;
        // 0x19f604: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f600) {
            ctx->pc = 0x19F678u;
            return;
        }
    }
    ctx->pc = 0x19F608u;
    // 0x19f608: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f60c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f610: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x19f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f614: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19f614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19f618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f61c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x19f620: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f624: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19f628: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x19f628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19f62c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f630: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19f634: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x19f634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F638u;
    {
        const bool branch_taken_0x19f638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F638u;
        // 0x19f63c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f638) {
            ctx->pc = 0x19F648u;
            return;
        }
    }
    ctx->pc = 0x19F640u;
    // 0x19f640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F640u;
    {
        const bool branch_taken_0x19f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F640u;
        // 0x19f644: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f640) {
            ctx->pc = 0x19F64Cu;
            return;
        }
    }
    ctx->pc = 0x19F648u;
}
