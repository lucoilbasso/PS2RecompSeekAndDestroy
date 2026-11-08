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

// Function: entry_001904fc
// Address: 0x1904fc - 0x190520
void entry_001904fc_0x1904fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904fc_0x1904fc");
#endif

    ctx->pc = 0x1904fcu;

    // 0x1904fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1904fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x190500: 0x8cb2015c  lw          $s2, 0x15C($a1)
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x190504: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x190504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x190508: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190508u;
    {
        const bool branch_taken_0x190508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190508u;
        // 0x19050c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190508) {
            ctx->pc = 0x190520u;
            return;
        }
    }
    ctx->pc = 0x190510u;
    // 0x190510: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x190510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x190514: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x190514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x190518: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x190518u;
    {
        const bool branch_taken_0x190518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190518) {
            ctx->pc = 0x19051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190518u;
            // 0x19051c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190688u;
            return;
        }
    }
    ctx->pc = 0x190520u;
}
