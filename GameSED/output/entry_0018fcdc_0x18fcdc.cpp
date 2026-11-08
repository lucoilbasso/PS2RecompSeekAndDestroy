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

// Function: entry_0018fcdc
// Address: 0x18fcdc - 0x18fd1c
void entry_0018fcdc_0x18fcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fcdc_0x18fcdc");
#endif

    ctx->pc = 0x18fcdcu;

    // 0x18fcdc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x18fcdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fce0: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fce4: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18fce8: 0x240d04e2  addiu       $t5, $zero, 0x4E2
    ctx->pc = 0x18fce8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x18fcec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18fcf0: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18fcf4: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x18fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
    // 0x18fcf8: 0x73680a  movz        $t5, $v1, $s3
    ctx->pc = 0x18fcf8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x18fcfc: 0xaea80008  sw          $t0, 0x8($s5)
    ctx->pc = 0x18fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 8));
    // 0x18fd00: 0x53600a  movz        $t4, $v0, $s3
    ctx->pc = 0x18fd00u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
    // 0x18fd04: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x18fd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x18fd08: 0xde270178  ld          $a3, 0x178($s1)
    ctx->pc = 0x18fd08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x18fd0c: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FD0Cu;
    {
        const bool branch_taken_0x18fd0c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD0Cu;
        // 0x18fd10: 0x92300158  lbu         $s0, 0x158($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd0c) {
            ctx->pc = 0x18FD1Cu;
            return;
        }
    }
    ctx->pc = 0x18FD14u;
    // 0x18fd14: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18fd18: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18fd18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->pc = 0x18fd1cu;
}
