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

// Function: entry_0013dacc
// Address: 0x13dacc - 0x13db08
void entry_0013dacc_0x13dacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dacc_0x13dacc");
#endif

    ctx->pc = 0x13daccu;

    // 0x13dacc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13dad0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13dad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dad4: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x13dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13dad8: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x13dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x13dadc: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x13dadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13dae0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x13dae4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13DAE4u;
    {
        const bool branch_taken_0x13dae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAE4u;
        // 0x13dae8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dae4) {
            ctx->pc = 0x13DB08u;
            return;
        }
    }
    ctx->pc = 0x13DAECu;
    // 0x13daec: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x13daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x13daf0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13daf4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13daf8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13daf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13dafc: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x13dafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13db00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13DB00u;
    {
        const bool branch_taken_0x13db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB00u;
        // 0x13db04: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db00) {
            ctx->pc = 0x13DB3Cu;
            return;
        }
    }
    ctx->pc = 0x13DB08u;
}
