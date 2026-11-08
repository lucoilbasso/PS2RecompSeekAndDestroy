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

// Function: entry_0017ddc0
// Address: 0x17ddc0 - 0x17de60
void entry_0017ddc0_0x17ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ddc0_0x17ddc0");
#endif

    ctx->pc = 0x17ddc0u;

    // 0x17ddc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ddc4: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x17ddc4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ddcc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x17ddccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddd0: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x17DDD0u;
    {
        const bool branch_taken_0x17ddd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDD0u;
        // 0x17ddd4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddd0) {
            ctx->pc = 0x17DE60u;
            return;
        }
    }
    ctx->pc = 0x17DDD8u;
    // 0x17ddd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17dddc: 0x8da30028  lw          $v1, 0x28($t5)
    ctx->pc = 0x17dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 40)));
    // 0x17dde0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17dde4: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x17dde4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17dde8: 0xc63bc  dsll32      $t4, $t4, 14
    ctx->pc = 0x17dde8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 14));
    // 0x17ddec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ddf0: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x17ddf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17ddf4: 0xb5cf8  dsll        $t3, $t3, 19
    ctx->pc = 0x17ddf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 19);
    // 0x17ddf8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17ddfc: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x17ddfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x17de00: 0x946a0018  lhu         $t2, 0x18($v1)
    ctx->pc = 0x17de00u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17de04: 0x94670004  lhu         $a3, 0x4($v1)
    ctx->pc = 0x17de04u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17de08: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x17de0c: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x17de0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17de10: 0xa56b8  dsll        $t2, $t2, 26
    ctx->pc = 0x17de10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 26);
    // 0x17de14: 0x9469001a  lhu         $t1, 0x1A($v1)
    ctx->pc = 0x17de14u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x17de18: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x17de18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x17de1c: 0x9468000c  lhu         $t0, 0xC($v1)
    ctx->pc = 0x17de1cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17de20: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x17de20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x17de24: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x17de24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17de28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17de2c: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x17de2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x17de30: 0x844fc  dsll32      $t0, $t0, 19
    ctx->pc = 0x17de30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 19));
    // 0x17de34: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x17de34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x17de38: 0x9466002e  lhu         $a2, 0x2E($v1)
    ctx->pc = 0x17de38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x17de3c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x17de3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x17de40: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x17de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x17de44: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x17de44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x17de48: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x17de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x17de4c: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x17de4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x17de50: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x17de54: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17de58: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x17de58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x17de5c: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x17de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
    ctx->pc = 0x17de60u;
}
