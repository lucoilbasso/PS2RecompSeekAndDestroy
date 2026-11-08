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

// Function: entry_001a1900
// Address: 0x1a1900 - 0x1a1974
void entry_001a1900_0x1a1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1900_0x1a1900");
#endif

    switch (ctx->pc) {
        case 0x1a1940u: goto label_1a1940;
        case 0x1a1970u: goto label_1a1970;
        default: break;
    }

    ctx->pc = 0x1a1900u;

    // 0x1a1900: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a1900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1904: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a1904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1a1908: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x1a1908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x1a190c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a1910: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a1910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a1914: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a1918: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x1a191c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1924: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1a1924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1a1928: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x1a1928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
    // 0x1a192c: 0xafb60014  sw          $s6, 0x14($sp)
    ctx->pc = 0x1a192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 22));
    // 0x1a1930: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a1930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a1934: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1a1934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1a1938: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x1A1938u;
    SET_GPR_U32(ctx, 31, 0x1A1940u);
    ctx->pc = 0x1A193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1938u;
    // 0x1a193c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x1A1938u, 0x1A1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1940u;
label_1a1940:
    // 0x1a1940: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1944: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1944u;
    {
        const bool branch_taken_0x1a1944 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1944u;
        // 0x1a1948: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1944) {
            ctx->pc = 0x1A1980u;
            return;
        }
    }
    ctx->pc = 0x1A194Cu;
    // 0x1a194c: 0x12930009  beq         $s4, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A194Cu;
    {
        const bool branch_taken_0x1a194c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A194Cu;
        // 0x1a1950: 0xae170018  sw          $s7, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a194c) {
            ctx->pc = 0x1A1974u;
            return;
        }
    }
    ctx->pc = 0x1A1954u;
    // 0x1a1954: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a1954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a195c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1960: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a1960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1a1964: 0xafb40038  sw          $s4, 0x38($sp)
    ctx->pc = 0x1a1964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 20));
    // 0x1a1968: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A1968u;
    SET_GPR_U32(ctx, 31, 0x1A1970u);
    ctx->pc = 0x1A196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1968u;
    // 0x1a196c: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A1968u, 0x1A1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1970u;
label_1a1970:
    // 0x1a1970: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a1970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1974u;
}
