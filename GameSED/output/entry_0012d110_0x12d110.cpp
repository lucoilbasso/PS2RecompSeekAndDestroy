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

// Function: entry_0012d110
// Address: 0x12d110 - 0x12d140
void entry_0012d110_0x12d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d110_0x12d110");
#endif

    ctx->pc = 0x12d110u;

    // 0x12d110: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d114: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x12D114u;
    {
        const bool branch_taken_0x12d114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D114u;
        // 0x12d118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d114) {
            ctx->pc = 0x12D17Cu;
            return;
        }
    }
    ctx->pc = 0x12D11Cu;
    // 0x12d11c: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x12d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x12d120: 0x8ea2015c  lw          $v0, 0x15C($s5)
    ctx->pc = 0x12d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 348)));
    // 0x12d124: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D124u;
    {
        const bool branch_taken_0x12d124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d124) {
            ctx->pc = 0x12D128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D124u;
            // 0x12d128: 0xaeb2015c  sw          $s2, 0x15C($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D140u;
            return;
        }
    }
    ctx->pc = 0x12D12Cu;
    // 0x12d12c: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12D12Cu;
    {
        const bool branch_taken_0x12d12c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d12c) {
            ctx->pc = 0x12D130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D12Cu;
            // 0x12d130: 0x8ec200c4  lw          $v0, 0xC4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D158u;
            return;
        }
    }
    ctx->pc = 0x12D134u;
    // 0x12d134: 0xac5400c0  sw          $s4, 0xC0($v0)
    ctx->pc = 0x12d134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 20));
    // 0x12d138: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x12d138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x12d13c: 0xaeb2015c  sw          $s2, 0x15C($s5)
    ctx->pc = 0x12d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 18));
    ctx->pc = 0x12d140u;
}
