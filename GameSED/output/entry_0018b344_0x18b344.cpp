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

// Function: entry_0018b344
// Address: 0x18b344 - 0x18b37c
void entry_0018b344_0x18b344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b344_0x18b344");
#endif

    ctx->pc = 0x18b344u;

    // 0x18b344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18b348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b34c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18b350: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x18b350u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b354: 0x3c090026  lui         $t1, 0x26
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)38 << 16));
    // 0x18b358: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18b358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b35c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x18b35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b360: 0x9143ed90  lbu         $v1, -0x1270($t2)
    ctx->pc = 0x18b360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294962576)));
    // 0x18b364: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x18b364u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b368: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x18b368u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b36c: 0x8d22d630  lw          $v0, -0x29D0($t1)
    ctx->pc = 0x18b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x18b370: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x18b370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x18b374: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B374u;
    {
        const bool branch_taken_0x18b374 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B374u;
        // 0x18b378: 0xa500000c  sh          $zero, 0xC($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b374) {
            ctx->pc = 0x18B384u;
            return;
        }
    }
    ctx->pc = 0x18B37Cu;
}
