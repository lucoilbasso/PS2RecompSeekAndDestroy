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

// Function: entry_00191ce0
// Address: 0x191ce0 - 0x191d38
void entry_00191ce0_0x191ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191ce0_0x191ce0");
#endif

    ctx->pc = 0x191ce0u;

    // 0x191ce0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x191ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x191ce4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x191ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x191ce8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x191ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x191cec: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x191cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x191cf0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x191cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x191cf4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x191cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x191cf8: 0x8c8201dc  lw          $v0, 0x1DC($a0)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x191cfc: 0x94830150  lhu         $v1, 0x150($a0)
    ctx->pc = 0x191cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x191d00: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x191d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x191d04: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x191d08: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x191d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x191d0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191d10: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x191d10u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x191d14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191D14u;
    {
        const bool branch_taken_0x191d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D14u;
        // 0x191d18: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d14) {
            ctx->pc = 0x191D38u;
            return;
        }
    }
    ctx->pc = 0x191D1Cu;
    // 0x191d1c: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x191d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x191d20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191d24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x191d28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x191d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x191d2c: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x191d30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x191D30u;
    {
        const bool branch_taken_0x191d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D30u;
        // 0x191d34: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d30) {
            ctx->pc = 0x191D6Cu;
            return;
        }
    }
    ctx->pc = 0x191D38u;
}
