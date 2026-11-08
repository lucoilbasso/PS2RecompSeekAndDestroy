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

// Function: entry_001d5028
// Address: 0x1d5028 - 0x1d5060
void entry_001d5028_0x1d5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5028_0x1d5028");
#endif

    ctx->pc = 0x1d5028u;

    // 0x1d5028: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1d5028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d502c: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d5030: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1d5030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1d5034: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x1d5034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x1d5038: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5038u;
    {
        const bool branch_taken_0x1d5038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5038u;
        // 0x1d503c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5038) {
            ctx->pc = 0x1D5060u;
            return;
        }
    }
    ctx->pc = 0x1D5040u;
    // 0x1d5040: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5044: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d5048: 0x244264a8  addiu       $v0, $v0, 0x64A8
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25768));
    // 0x1d504c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D504Cu;
    {
        const bool branch_taken_0x1d504c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D504Cu;
        // 0x1d5050: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d504c) {
            ctx->pc = 0x1D5064u;
            return;
        }
    }
    ctx->pc = 0x1D5054u;
    // 0x1d5054: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1d5054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1d5058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5058u;
    {
        const bool branch_taken_0x1d5058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5058u;
        // 0x1d505c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5058) {
            ctx->pc = 0x1D5068u;
            return;
        }
    }
    ctx->pc = 0x1D5060u;
}
