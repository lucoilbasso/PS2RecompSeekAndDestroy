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

// Function: entry_00132950
// Address: 0x132950 - 0x132990
void entry_00132950_0x132950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132950_0x132950");
#endif

    ctx->pc = 0x132950u;

    // 0x132950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132958: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13295c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132960: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x132960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x132964: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x132964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x132968: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x132968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13296c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x13296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x132970: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x132970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x132974: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x132974u;
    {
        const bool branch_taken_0x132974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132974u;
        // 0x132978: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132974) {
            ctx->pc = 0x1329BCu;
            return;
        }
    }
    ctx->pc = 0x13297Cu;
    // 0x13297c: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x13297cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x132980: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x132980u;
    {
        const bool branch_taken_0x132980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x132980) {
            ctx->pc = 0x132984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132980u;
            // 0x132984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329C0u;
            return;
        }
    }
    ctx->pc = 0x132988u;
    // 0x132988: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x132988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x13298c: 0x0  nop
    ctx->pc = 0x13298cu;
    // NOP
    ctx->pc = 0x132990u;
}
