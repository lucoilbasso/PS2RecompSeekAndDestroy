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

// Function: entry_00156538
// Address: 0x156538 - 0x1565c0
void entry_00156538_0x156538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156538_0x156538");
#endif

    ctx->pc = 0x156538u;

label_156538:
    // 0x156538: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x156538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15653c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x15653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x156540: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x156540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x156544: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x156544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x156548: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x156548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x15654c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x156550: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x156550u;
    {
        const bool branch_taken_0x156550 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x156554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156550u;
        // 0x156554: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156550) {
            ctx->pc = 0x156538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156538;
        }
    }
    ctx->pc = 0x156558u;
    // 0x156558: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x156558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15655c: 0x34e60006  ori         $a2, $a3, 0x6
    ctx->pc = 0x15655cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
    // 0x156560: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x156560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x156564: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x156564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x156568: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x15656c: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x15656cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x156570: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x156570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156574: 0x34e20001  ori         $v0, $a3, 0x1
    ctx->pc = 0x156574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x156578: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x156578u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x15657c: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x15657cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x156580: 0x871026  xor         $v0, $a0, $a3
    ctx->pc = 0x156580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
    // 0x156584: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x156584u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x156588: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x156588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x15658c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x156590: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x156590u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x156594: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x156594u;
    {
        const bool branch_taken_0x156594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x156598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156594u;
        // 0x156598: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156594) {
            ctx->pc = 0x1565C0u;
            return;
        }
    }
    ctx->pc = 0x15659Cu;
    // 0x15659c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x15659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1565a0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1565a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1565a4: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x1565a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1565a8: 0x671026  xor         $v0, $v1, $a3
    ctx->pc = 0x1565a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x1565ac: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1565acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1565b0: 0x472824  and         $a1, $v0, $a3
    ctx->pc = 0x1565b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1565b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1565b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1565b8: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x1565b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1565bc: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x1565bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1565c0u;
}
