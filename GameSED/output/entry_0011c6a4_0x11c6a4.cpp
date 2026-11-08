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

// Function: entry_0011c6a4
// Address: 0x11c6a4 - 0x11c700
void entry_0011c6a4_0x11c6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c6a4_0x11c6a4");
#endif

    ctx->pc = 0x11c6a4u;

label_11c6a4:
    // 0x11c6a4: 0xdc490000  ld          $t1, 0x0($v0)
    ctx->pc = 0x11c6a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c6a8: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x11c6a8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c6ac: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x11c6acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11c6b0: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x11c6b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11c6b4: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x11c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x11c6b8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x11c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x11c6bc: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x11c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x11c6c0: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x11c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x11c6c4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11c6c8: 0x0  nop
    ctx->pc = 0x11c6c8u;
    // NOP
    // 0x11c6cc: 0x0  nop
    ctx->pc = 0x11c6ccu;
    // NOP
    // 0x11c6d0: 0x1446fff4  bne         $v0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C6D0u;
    {
        const bool branch_taken_0x11c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x11C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D0u;
        // 0x11c6d4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d0) {
            ctx->pc = 0x11C6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c6a4;
        }
    }
    ctx->pc = 0x11C6D8u;
    // 0x11c6d8: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x11c6d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c6dc: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x11c6dcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c6e0: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x11c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x11c6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c6e8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x11c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x11c6ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c6f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c6f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c6f8: 0x80452be  j           func_114AF8
    ctx->pc = 0x11C6F8u;
    ctx->pc = 0x11C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6F8u;
    // 0x11c6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114AF8u;
    LoadPackage2System__10ApSavePack_0x114af8(rdram, ctx, runtime); return;
    ctx->pc = 0x11C700u;
}
