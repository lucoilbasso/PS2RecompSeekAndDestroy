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

// Function: entry_00176600
// Address: 0x176600 - 0x176680
void entry_00176600_0x176600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176600_0x176600");
#endif

    ctx->pc = 0x176600u;

label_176600:
    // 0x176600: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x176600u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176604: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x176604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x176608: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x176608u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17660c: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x17660cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x176610: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x176610u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x176614: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x176614u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x176618: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x176618u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x17661c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x17661cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x176620: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x176624: 0x0  nop
    ctx->pc = 0x176624u;
    // NOP
    // 0x176628: 0x0  nop
    ctx->pc = 0x176628u;
    // NOP
    // 0x17662c: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17662Cu;
    {
        const bool branch_taken_0x17662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x176630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17662Cu;
        // 0x176630: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17662c) {
            ctx->pc = 0x176600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176600;
        }
    }
    ctx->pc = 0x176634u;
    // 0x176634: 0xde020090  ld          $v0, 0x90($s0)
    ctx->pc = 0x176634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x176638: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17663c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17663cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x176640: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x176644: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x176644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x176648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17664c: 0x27848c80  addiu       $a0, $gp, -0x7380
    ctx->pc = 0x17664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x176650: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x176650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x176654: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x176654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x176658: 0xff828c80  sd          $v0, -0x7380($gp)
    ctx->pc = 0x176658u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U64(ctx, 2));
    // 0x17665c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176660: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x176660u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x176664: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x176664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x176668: 0xde030090  ld          $v1, 0x90($s0)
    ctx->pc = 0x176668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x17666c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17666cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176670: 0xff838c90  sd          $v1, -0x7370($gp)
    ctx->pc = 0x176670u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U64(ctx, 3));
    // 0x176674: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x176674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x176678: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x176678u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x17667c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x17667cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x176680u;
}
